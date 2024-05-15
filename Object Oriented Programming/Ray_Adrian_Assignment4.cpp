  #include <iostream>
  using namespace std;

  class animal
  {
  public:

    animal()
    {
      cout << "This is the constructor of Animal class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Animal class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Animal class" << endl;
    }
  };

  class fish : public animal
  {
  public:

    fish()
    {
      cout << "This is the constructor of Fish class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Fish class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Fish class" << endl;
    }
  };

  class mammal : public animal
  {
  public:

    mammal()
    {
      cout << "This is the constructor of Mammal class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Mammal class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Mammal class" << endl;
    }
  };

  class cat : public mammal
  {
  public:

    cat()
    {
      cout << "This is the constructor of Cat class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Cat class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Cat class" << endl;
    }
  };


  class bass : public animal
  {
  public:

    bass()
    {
      cout << "This is the constructor of Bass class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Bass class" << endl;
    }

    grow()
    {
        cout <<" grow() method of Bass class" << endl;
    }
  };

  class sardine : public fish
  {
  public:

    sardine()
    {
      cout << "This is the constructor of Sardine class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Sardine class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Sardine class" << endl;
    }
  };

  class tiger : public cat
  {
  public:

    tiger()
    {
      cout << "This is the constructor of Tiger class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Tiger class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Tiger class" << endl;
    }
  };

  class lion : public cat
  {
  public:

    lion()
    {
      cout << "This is the constructor of Lion class"<< endl;
    }
    eat()
    {
        cout <<" eat() method of Lion class" << endl;
    }
    grow()
    {
        cout <<" grow() method of Lion class" << endl;
    }
  };
void display(animal & a1)
{
    a1.eat();
    a1.grow();
}
int main()
{
sardine s1;
bass b1;
tiger t1;
lion l1;
animal a1;
display(a1);
display(s1);
display(b1);
display(t1);
display(l1);

}





