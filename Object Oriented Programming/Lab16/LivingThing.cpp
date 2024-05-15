  #include <iostream>
  using namespace std;

  class livingThing
  {
  public:

    livingThing()
    {
      cout << "This is the constructor of LivingThing class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from LivingThing class" << endl;
    }
  };

  class animal : public livingThing
  {
  public:

    animal()
    {
      cout << "This is the constructor of Animal class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Animal class" << endl;
    }
  };

  class plant : public livingThing
  {
  public:

    plant()
    {
      cout << "This is the constructor of Plant class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Plant class" << endl;
    }
  };

  class fish : public animal
  {
  public:

    fish()
    {
      cout << "This is the constructor of Fish class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Fish class" << endl;
    }
  };

  class mammal : public animal
  {
  public:

    mammal()
    {
      cout << "This is the constructor of Mammal class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Mammal class" << endl;
    }
  };

  class cat : public mammal
  {
  public:

    cat()
    {
      cout << "This is the constructor of Cat class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Cat class" << endl;
    }
  };


  class bass : public animal
  {
  public:

    bass()
    {
      cout << "This is the constructor of Animal class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Animal class" << endl;
    }
  };

  class sardine : public fish
  {
  public:

    sardine()
    {
      cout << "This is the constructor of Sardine class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Sardine class" << endl;
    }
  };

  class tiger : public cat
  {
  public:

    tiger()
    {
      cout << "This is the constructor of Tiger class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Tiger class" << endl;
    }
  };

  class lion : public cat
  {
  public:

    lion()
    {
      cout << "This is the constructor of Lion class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Lion class" << endl;
    }
  };

  class tree : public plant
  {
  public:

    tree()
    {
      cout << "This is the constructor of Tree class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Tree class" << endl;
    }
  };

  class chestnut : public tree
  {
  public:

    chestnut()
    {
      cout << "This is the constructor of Chestnut class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Chestnut class" << endl;
    }
  };

  class cherry : public tree
  {
  public:

    cherry()
    {
      cout << "This is the constructor of Cherry class"<< endl;
    }
    toString()
    {
        cout <<"Called toString() function from Cherry class" << endl;
    }
  };

int main()
{
    sardine s1;
    bass b1;
    tiger t1;
    lion l1;
    chestnut c1;
    cherry ch1;
    tree tre1;
    tre1.toString();
    ch1.tree::toString();
}
