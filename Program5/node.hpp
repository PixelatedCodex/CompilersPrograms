/*
 * This defines the "node" class in C++. Do not need this for C because 
 * just use the standard flex "yyxxxxx" variables/functions. 
 * The commented out portions are for debugging.
 *
 *
 *
 * $Author: kbuckner $
 * $Id: node.hpp,v 1.1 2017-10-04 13:20:53-06 kbuckner Exp kbuckner $
 * $Date: 2017-10-04 13:20:53-06 $
 *
 * $Log: node.hpp,v $
 * Revision 1.1  2017-10-04 13:20:53-06  kbuckner
 * Finally working version
 *
 * Edited by Heather Aust
 * Program 5
 * Compilers
 * Nov 19, 2019
 *
 */

#ifndef NODE_HPP
#define NODE_HPP
#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::ostream;


class Node
{
  public:
    // set the pointers to 0 C++ is trying to get away from NULL
    Node(Node *an=0,Node *bn=0, Node *cn=0, Node *dn=0) 
    {
      reset();
      dval=0.0;
      ival=0;
      first=an;
      second=bn;
      third=cn;
      fourth=dn;
    }
    virtual ~Node()
    {
      if(first) delete first;
      if(second) delete second;
      if(third) delete third;
      if(fourth) delete fourth;
    }
    int getint() const
    {
      return ival;
    }
    double getdbl() const
    {
      return dval;
    }
    string getstring() const
    {
      return sval;
    }
    void setval(const char *v)
    {
      sval=v;
    }
    void setval(const string s)
    {
      sval=s;
    }
    void setval(int i)
    {
      ival=i;
    }
    void setval(double d)
    {
      dval=d;
    }
    void reset() {
      sval.clear();
    }
    
    Node* getchild(int i){
      switch (i) {
	case 1:
	  return first;
	  break;
	case 2:
	  return second;
	  break;
	case 3:
	  return third;
	  break;
	case 4:
	  return fourth;
	  break;
	default:
	  return 0;
	  break;
      }
    }

    virtual void print(ostream *out = 0)
    {
      if(first) first->print(out);
      *out << sval ;
      if(second) second->print(out);
      if(third) third->print(out);
      if(fourth) fourth->print(out);
      return;
    }
    virtual void printPreOrder(ostream *out = 0)
    {
      *out << sval ;
      if(first) first->printPreOrder(out);
      if(second) second->printPreOrder(out);
      if(third) third->printPreOrder(out);
      if(fourth) fourth->printPreOrder(out);
      return;
    }
  protected:
    int ival;
    double dval;
    string sval;
    Node *first,*second,*third,*fourth;
};

class NodeNum : public Node
{
  public:
    NodeNum(int i)
    {
      ival=i;
    };

    virtual void print(ostream *out = 0)
    {
      *out << ival << endl;
      return;
    }
    virtual void printPreOrder(ostream *out = 0)
    {
      *out << ival << endl;
      return;
    }
};
#endif
