#include<iostream>
#include<windows.h>
using namespace std;
void start();
int manu();
int k=0;
string name[100];
string no[100];
void swap(string* namea, string* nameb,string* numc,string* numd)
{
 string t = *namea;
 *namea = *nameb;
 *nameb = t;
 t = *numc;
 *numc = *numd;
 *numd = t;
}
int partition (string arr[], int low, int high)
{
 string pivot = arr[high]; // pivot
 int i = (low - 1);
 for (int j = low; j <= high- 1; j++)
 {
 //if current element is smaller than pivot, increment the low element
 //swap elements at i and j
 if (arr[j] <= pivot)
 {
 i++; // increment index of smaller element
 swap(&arr[i], &arr[j],&no[i], &no[j]);
 }
 }
 swap(&arr[i + 1], &arr[high],&no[i + 1], &no[high]);
 return (i + 1);
}
//quicksort algorithm
void quickSort(string arr[], int low, int high)
{
 if (low < high)
 {
 //partition the array
 int pivot = partition(arr, low, high);
 //sort the sub arrays independently
 quickSort(arr, low, pivot - 1);
 quickSort(arr, pivot + 1, high);
 }
}
int main()
{
start();
int check=0;
int Total_contacts=0;
 do
 {
 // Add check=manu();contacts
 if(check==1)
 {
 cout<<"\t\t\t\t\t\t Name :";
 cin>>name[k];
 cout<<"\t\t\t\t\t\t Phone Number :";
 cin>>no[k];
 k++;
 Total_contacts++;
}
//Diplay contacts
else if (check==2)
{
 cout<<"===="<<Total_contacts;
 quickSort( name, 0, Total_contacts-1);
 //cout << k << " \t " << Total_contacts << endl;
int check2=0;
for(int i=0; i<100;i++)
{
if(name[i]!="\0")
cout<<"\t\t\t\t\t Name :"<<name[i]<< " Phone:"<<no[i]<<endl;
check2++;
}
if(check2==0)
{
cout<<"\t\t\t\t\t";
}
}
//Search by Number
else if(check==3)
{
string temp;
cout<<"\t\t\t\t\tNumber : ";
cin>>temp;
int check2=0;
for(int i=0;i<100;i++)
{
if(temp==no[i])
{
cout<<"\t\t\t\t\tNumber is Found\n";cout<<"\t\t\t\t\tName : "<<name[i]<<" Phone: "<<no[i]<<endl;
check2++;
}
}
if(check2==0)
{
cout<<"\t\t\t\t\t This Number is Not found in yourcontact list\n";
}
}
//Search By Name
else if(check==4)
{
string temp;
cout<<"\t\t\t\t\tName : ";
cin>>temp;
int check2=0;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\tName is Found\n";cout<<"\t\t\t\t\tName : "<<name[i]<<" Phone: "<<no[i]<<endl;
check2++;
}
}
if(check2==0)
{
cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
}
}
// Update
else if(check==5)
{
string temp,temp2,temp3;
cout<<"\t\t\t\t\tName : ";
cin>>temp;
int check2=0;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\tNew Name : ";
cin>>temp2;
cout<<"\t\t\t\t\tNew Number : ";
cin>>temp3;
name[i]=temp2;
no[i]=temp3;
check2++;
cout<<"\t\t\t\t\tUpdated Successfully ";
}
}
if(check2==0)
{
cout<<"\t\t\t\t\t This name is Not found in your contactlist\n";
}
}
// delete
else if(check==6)
{
string temp;
cout<<"\t\t\t\t\tFor Delete Enter Name : ";
cin>>temp;
int check2=0;
for(int i=0;i<100;i++)
{
if(temp==name[i])
{
cout<<"\t\t\t\t\tDeleted Successfully\n";cout<<"\t\t\t\t\tName : "<<name[i]<<" Phone: "<<no[i]<<endl;
name[i]="\0";
no[i]="\0";
check2++;
Total_contacts--;
}
}
if(check2==0)
{
cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
}
}
// delete All
else if(check==7)
{
cout<<"\t\t\t\t\t All Deleted Successfully\n";
for(int i=0;i<k;i++)
{
name[i]="\0";
no[i]="\0";
}
k=0;
Total_contacts=0;
}
// Diplay numbers of contacts
else if(check==8)
{
cout<<"\t\t\t\t\tTotal Number of contact list are :"<<Total_contacts<<endl;
}
check=manu();
}while(check!=9);
}
int manu()
{
cout<<"\n\n\n\n\n";
cout<<"\t\t\t\t\t-------------------------------------------\n";
cout<<"\t\t\t\t\t-------------------------------------------\n";
cout<<"\t\t\t\t\t        PHONE BOOK APPLICATION \n";
cout<<"\t\t\t\t\t-------------------------------------------\n";
cout<<"\t\t\t\t\t \n";
cout<<"\t\t\t\t\t [1] Add Contacts \n";
cout<<"\t\t\t\t\t [2] Display All Contacts \n";
cout<<"\t\t\t\t\t [3] Search by Number \n";
cout<<"\t\t\t\t\t [4] Search by Name \n";
cout<<"\t\t\t\t\t [5] Update \n";
cout<<"\t\t\t\t\t [6] Delete \n";
cout<<"\t\t\t\t\t [7] Delete All \n";
cout<<"\t\t\t\t\t [8] Number of contacts \n";
cout<<"\t\t\t\t\t \n";
cout<<"\t\t\t\t\t-------------------------------------------\n";
cout<<"\t\t\t\t\t [9] Exit \n";
cout<<"\t\t\t\t\t-------------------------------------------\n";
int a;
cin>>a;
system("cls");
return a;
}
void start()
{
system("Color 02");
cout<<"\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t----------------------------\n";
cout<<"\t\t\t\t\t\t----------------------------\n";
cout<<"\t\t\t\t\t\t    PHONE BOOK APPLICATION\n";
cout<<"\t\t\t\t\t\t----------------------------\n\n";
cout<<"\t\t\t\t\tLoading ";
char x = 272;
for(int i=0; i<35; i++)
{
cout<<x;
if(i<10)
Sleep(300);
if(i>=10 && i<20)
Sleep(150);
if(i>=10)
Sleep(25);
}
system("cls");
}
