  #include <iostream>
  using namespace std;

  class Test
  {
  public:

    Test()
    {
      cout << "Hello this is a test" << endl;
    }

    Test(int a)
    {
      cout << "this is a test but with a number" << endl;
    }
     static void yell(const Test & a1)
    {
        cout<< "IM YELLING AT YOU FROM TEST" << endl;
    }
  };
  class Experiment : public Test
  {
  public:
      Experiment()
      {
          cout << "this is an experiment" << endl;
      }

       static yell(const Experiment & e1)
    {
        cout<< "IM YELLING AT YOU FROM EXPERIMENT" << endl;
    }

  };



  int main()
  {

    Test t1;
    Test t2(2);
    Experiment e1;
    yell(e1);
  }

