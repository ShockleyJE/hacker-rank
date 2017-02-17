// This problem is garbage.
// I appreciate the refresher on virtual functions but seriously refise to

class Person{
    public:
        int age;
        string name;
        virtual void getdata() = 0;
        virtual void putdata() = 0;

};
class Professor : public Person{
    public:
      int publications;
      int cur_id;
      void getdata(){
        cin >> name >> age >> publications;
      }
      void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id;
      }

};
class Student : public Person{
  public:
    int marks = 0;
    int cur_id;
    void getdata(){
      cin >> name >> age;
      int i= 0;
      int temp;
      while(cin && i < 6){
        cin >> temp;
        i++;
        marks = marks + temp;
      };

    }
    void putdata(){
      cout << name << " " << age << " " << marks << "\n";
      cout << cur_id;
    }

};
