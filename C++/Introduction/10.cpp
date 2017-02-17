// This problem is garbage.
// passes all cases

int idp= 0;
int ids= 0;
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
        idp++;
        cur_id= idp;
      }
      void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << "\n";
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
      ids++;
      cur_id= ids;
    }
    void putdata(){
      cout << name << " " << age << " " << marks << " " << cur_id << "\n";
    }

};
