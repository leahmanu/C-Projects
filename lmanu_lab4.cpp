/*
Leah Manu Lab 4
*/
#include <iostream>
#include<iomanip>
#include <fstream>

fstream inventoryFile("inventoryfile.dat",ios::in | ios::out | ios::binary);


struct Inventory
{
  char desc[30];
  int qty;
  double wholeSaleCost;
};

// Function prototypes
void addRecord(fstream &);
void viewRecord(fstream &);
void changeRecord(fstream &);
void exit();

int main()
{
  using namespace std;
  int choice;
  cout << setprecision(2) << fixed;

  do
  {
    // Display the menu.
    cout << "\n1. Add a new record\n";
    cout << "2. View an existing record by record number\n";
    cout << "3. Change an existing record\n";
    cout << "4. Exit\n\n";

    do
    {
      cout << "Enter your choice (1-4): ";
      cin >> choice;
    } while (choice < 1 || choice > 4);

    // Process the selection.
    switch (choice)
    {
      // Choice 1 is to add a record.
      case 1:
        // addRecord(inventoryFile);
        break;

      // Choice 2 is to view a record.
      case 2:
        viewRecord(inventoryFile);
       break;

      // Choice 3 is to change a record.
      case 3:
        // changeRecord(inventoryFile);
            
        case 4:
            exit();
    }
  } while (choice != 4);

  system ("pause");
  return 0;
}

void addRecord(fstream &)
{
    Inventory tempRecord;
    // write out oneTest to a file
    cout << "Enter the following inventory data: \n";
    cout << "Description: ";
    
    inventoryFile.write(reinterpret_cast<char *> (&tempRecord), sizeof(tempRecord));
    cout << endl;
    cout << "Quantity:";
    cin << qty;
    #input val
    cout << endl;
    cout << "Retail Price:";
    cin << wholeSaleCost;
    #input val
    inventoryFile.close();
    
#input val for numeric values
}
void viewRecord(fstream &);
{
    int num;
    cout << "Enter the record number of the item: ";
    cin << num;
    #input val
    while (num < 0)
    {
        cout << "Please enter a number greater than 0!"
    }
    #display record of num
    ifstream input_file("students.data", ios::binary);
    Inventory record[num];
    input_file.read((char*)&record, sizeof(record));
    
    for (int i = 0; idx < record[num].size() ; i++)
    {
        // If you wanted to search for specific records,
        // you should do it here! if (idx == 2) ...
        
        cout << "Record #" << num << endl;
        cout << "Description: " << record[num].desc << endl;
        cout << "Quantity: " << record[num].qty << endl;
        cout << "Retail Price: " << record[num].wholeSaleCost<< endl;
        cout << endl << endl;
    }
    
    
    inventoryFile.close();

}
void changeRecord(fstream &);
{
#input val for numeric values
    /* Input validation for Item Quantity and Cost: (4 X 3 = 12 points)
     1. Must be numeric (4 points each)
     2. Must not be negative (4 points each)
     3. Must be greater than zero (4 points each) */
    cout << "Enter the following inventory data: \n";
    cout << "Description: ";
# user input
    cout << endl;
    cout << "Quantity:";
    cin << qty;
#input val
    cout << endl;
    cout << "Retail Price:";
    cin << wholeSaleCost;
#input val

    inventoryFile.close();

}

void exit
{
    cout << "Thank you for visiting Leah Manu's store";
}
/*
 Lab 4
 50 points
 (Note: This is considered a challenging lab)
 Purpose: To get experience using structures and binary files.
 
 Just write the code for:
 (10 points) (8 points)
 1. addRecord 2. viewRecord 3. changeRecord
 (10 points)
 
 There is no validation for the Item Description.
 File specifications: (2 points)
 You must submit the test file (with reasonable inventory names) that you created while
 testing your program. The test file should have at least 5 entries and have an extension of
 “.dat”
 The file path to the test file should be “C:\temp”
 *** The file format MUST be binary***.
 On Exit: (2 Points. NOTE: this requirement is not represented on the sample output below)
 Print to the screen:  where <YYY> is your last name.
 
 Howard Community College
 Hints:
 1. Refer to textbook example progams 12-13 through 12-22.
 2. The backslash is used to separate folders in the file path on Microsoft File Systems.
 e.g. C:\Temp\Dog.dat
 File names in Unix use a forward slash
 e.g. C:/Temp/Dog.dat
 Because C++ uses the backslash as a marker meaning that the next character is a special character (like \n means CR + LF – two characters), we must use special notation to get a backslash.
 Note that in Unix the \n means only one character entry CR the operating system treats
 as a CR + LF.
 In C++ on MS Windows we can use two backslashes \\ to signal the compiler that the next character is a special character and that special character is the backslash.
 Note: C++ recognizes the Unix/Linux version and automatically converts it to the appropriate operating system style. This means file names in Microsoft Windows can be written as C:\\Temp\\Dog.dat or C:/Temp/Dog.dat.
 3. You should manually delete the inventory test file every time you run your program.
 If you don’t delete the inventory file and run your program again, you may start working with a file that is already in existence as opposed to creating a new file.
 4. Note – students have asked: Why was the string class not included? This prevents the use of getline() and substring methods that could have made the code more organized and efficient.
 The purpose is to force the students to process the input line as an array of characters.
 
 */
