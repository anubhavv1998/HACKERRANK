/* 1. Given an array, A, of N  integers, print A's elements in reverse order as a single line of space-separated numbers.

Example
A=[1,2,3,4]

Print 4 3 2 1. Each integer is separated by one space.
*/

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    for(int i=n-1; i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


/*Task
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has  parameters:
A string,first name .
A string,last name .
An integer,idNumber .
An integer array (or vector) of test scores,scores .
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
*/
#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
   private:
      vector<int> testScores;  
   public:
 Student(string firstName, string lastName, int id, vector<int> scores) : 
 Person(firstName, lastName, id) {
            this->testScores = scores;
        }
  
      char calculate() {
            int sum = 0;
            int med;
            char grade = 'T';
   for (vector<int>::iterator it = testScores.begin() ; it != testScores.end(); ++it)
                sum+=*it;
            med = int(sum/testScores.size());
 
            if (med>=90 && med<=100) { grade='O'; }
            if (med>=80 && med<90)   { grade='E'; }
            if (med>=70 && med<80)   { grade='A'; }
            if (med>=55 && med<70)   { grade='P'; }
            if (med>=40 && med<=55)  { grade='D'; }
            
            return grade;
        }
};


/*Function Description
Complete the factorial function in the editor below. Be sure to use recursion.

factorial has the following paramter:

int n: an integer
*/

// Complete the factorial function below.

int factorial(int n) {
    if(n<=1)
    { 
        return (1); 
    } 
    else
        { 
            return (n*(factorial(n-1))); 
    }
}
