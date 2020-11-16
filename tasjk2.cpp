#include<iostream>
using namespace std;
const  char *ch = "22222.222222222";

int length( const char *ch) {
    int count = 0;
    while (*ch != NULL)
    {
        count++;
            ch++;
    }

    //this is for going through all the elements of the *ch
    while (*(ch++) != '\0') count++;

    cout << "Length of " << " is " << count;

 }
int poninter(const char* ch)
{


    int count = 0;
    while (*ch != '.')
    {




        count++;
        ch++;
    }
    {

    }
}int length( const char *ch) {
    int count = 0;
    while (*ch != NULL)
    {
        count++;
            ch++;
    }

    //this is for going through all the elements of the *ch
    while (*(ch++) != '\0') count++;

    cout << "Length of " << " is " << count;

 }
int poninter(const char* ch)
{


    int count = 0;
    while (*ch != '.')
    {




        count++;
        ch++;
    }
    {

    }
}
int main() {
      char *ch = "12121212.121212";
    cout<<length(ch);
    cout<<"the decmial"<< point(ch)
	
    return 0;

}