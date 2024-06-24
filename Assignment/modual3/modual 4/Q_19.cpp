//wap to read file contents and display on console.
#include<iostream>

#include<fstream>
using namespace std;
main()
{
	ifstream myfile("example.txt");
	string str;
	if(!myfile){
		cout<<"unable to file";
	}
		while(getline(myfile,str)){
			cout<<str<<"\n";
				if(myfile){
				cout<<"\nfile id close:";
			}
		}
}




/*#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Open the file "example.txt" for reading
    ifstream myfile("example.txt");

    // Check if the file was successfully opened
    if (!myfile) {
        cerr << "Unable to open file" << endl;
        return 1; // Exit if file not opened
    }

    // String to hold each line read from the file
    string str;

    // Read the file line by line and display each line
    while (getline(myfile, str)) {
        cout << str << "\n";
    }

    // Check if the file is still open and close it
    if (myfile.is_open()) {
        myfile.close();
        cout << "File is closed." << endl;
    }

    return 0;
}*/

