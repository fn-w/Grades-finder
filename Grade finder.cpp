#include<iostream>
#include<fstream>
using namespace std;
int main()

{

	
		int total_marks=0,No_subject,T_marks=100,i,j;
		string subject[No_subject],grade[No_subject],a,b;
		ofstream myfile("grade.xls");
		float marks[No_subject],per[No_subject],GPA[No_subject];
		cout<<"enter your name and your father name"<<endl;
		cin>>a>>b;
		cout<<"enter number of subject"<<endl;
		cin>>No_subject;
		
		for(i=0;i<No_subject;i=i+1)
		{
			
			cout<<"enter name of subject "<<endl;
			cin>>subject[i];
			cout<<"enter subject marks"<<endl;		
			cin>>marks[i];
			per[i]=(marks[i]/T_marks)*100;
			if(per[i]>=90)
			{
				grade[i]="A(excellent)";
				GPA[i]=4.0; 	
			}
			else if(per[i]<90&&per[i]>=85)
			{
				grade[i]="A+";
				GPA[i]=3.7;
			}
			else if(per[i]<85&&per[i]>=80)
			{
				grade[i]="B+";
				GPA[i]=3.3;
			}
			else if(per[i]<80&&per[i]>=75)
			{
				grade[i]="B(good)";
				GPA[i]=3.0;
			}
			else if(per[i]<75&&per[i]>=70)
			{
				grade[i]="B-";
				GPA[i]=2.7;
			}
			else if(per[i]<70&&per[i]>=65)
			{	
				grade[i]="C+";
				GPA[i]=2.3;
			}
			else if(per[i]<65&&per[i]>=60)
			{
				grade[i]="C(average)";
				GPA[i]=2.0;
			}
			else if(per[i]<60&&per[i]>=55)
			{
				grade[i]="C-";
				GPA[i]=1.7;
			}
			else if(per[i]<55&&per[i]>=50)
			{	
				grade[i]="D";
				GPA[i]=1.3;
			}	
			else
			{
				grade[i]="F";
				GPA[i]=0.0;
			}
			
			total_marks=total_marks+marks[i];
			
		
		}
		myfile<<"\t\t\t\t Project Name;     GRADE FINDER"<<endl<<endl<<endl<<endl;
		myfile<<"\t############################\t\t\t\t\t\t\t\t\t\t\t############################"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\tPast here\t\t#\t\t\t\t\t\t\t\t#\tpast here\t\t#"<<endl;
		myfile<<"\t#\tyour picture\t\t#\t\t\t\t\t\t\t\t#\tyuor uni logo\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t#\t\t\t#\t\t\t\t\t\t\t\t#\t\t\t#"<<endl;
		myfile<<"\t############################\t\t\t\t\t\t\t\t\t\t\t############################"<<endl<<endl<<endl;
		
		myfile<<"\t\t\t\tCOMSATS UNIVERSITY ISLAMABAD"<<endl;
		myfile<<"\t\t\t\tWAH CAMPUS"<<endl<<endl;
		myfile<<"\t\tMr            "<<a<<"         Son/Daughter of            "<<b<<endl;
		myfile<<"\t\tRegular student of COMSATS university islamabad (wah campus)\n\t\thas secured the marks shown against each subject"<<endl<<endl<<endl<<endl;
		
		
		myfile<<"\t\t************************************************************************************************************************"<<endl;
		myfile<<"\t\t*\tSubject \t\t T/Marks \t\t Ob/Marks \t\t percentage \t\t Grade \t\t GPA\t\t*"<<endl;
		cout<<endl<<endl<<"Subject \t T/Marks \t Ob/Marks \t percentage \t Grade \t\t GPA"<<endl;
		for(j=0;j<No_subject;j=j+1)
		{
			myfile<<"\t\t*\t"<<subject[j]<<"\t\t"<<T_marks<<"\t\t"<<marks[j]<<"\t\t"<<per[j]<<"%"<<"\t\t"<<grade[j]<<"\t\t"<<GPA[j]<<"\t\t*"<<endl;
		
			cout<<subject[j]<<"\t\t"<<T_marks<<"\t\t"<<marks[j]<<"\t\t"<<per[j]<<"%"<<"\t\t"<<grade[j]<<"\t\t"<<GPA[j]<<endl;
		}
    	myfile<<"\t\t************************************************************************************************************************"<<endl;
		cout<<endl<<endl<<"\t\t\tpercentage="<<total_marks/No_subject<<endl;
		myfile<<endl<<endl<<"\t\t\tpercentage="<<total_marks/No_subject<<endl;
		if(total_marks/No_subject>=90)
		{
			cout<<"\t\t\tCGPA=4.0"<<endl;
			cout<<"\t\t\tGrade=A(Excellent";
			myfile<<"\t\t\tCGPA=4.0"<<endl<<"\t\t\tGrade=A(Excellent";
		}	
		else if(total_marks/No_subject<90&&total_marks/No_subject>=85)
		{	
			cout<<"\t\t\tCGPA=3.7"<<endl;
			cout<<"\t\t\tGrade=A+";
			myfile<<"\t\t\tCGPA=3.7"<<endl<<"\t\t\tGrade=A+";
		}
		else if(total_marks/No_subject<85&&total_marks/No_subject>=80)
		{
			cout<<"\t\t\tCGPA=3.3"<<endl;
			cout<<"\t\t\tGrade=B+";
			myfile<<"\t\t\tCGPA=3.3"<<endl<<"\t\t\tGrade=B+";
		}	
		else if(total_marks/No_subject<80&&total_marks/No_subject>=75)
		{
			cout<<"\t\t\tCGPA=3.0"<<endl;
			cout<<"\t\t\tGrade=B(good)";
			myfile<<"\t\t\tCGPA=3.0"<<endl<<"\t\t\tGrade=B(good)";
		}
		else if(total_marks/No_subject<75&&total_marks/No_subject>=70)
		{	
			cout<<"\t\t\tCGPA=2.7"<<endl;
			cout<<"\t\t\tGrade=B-";
			myfile<<"\t\t\tCGPA=2.7"<<endl<<"\t\t\tGrade=B-";
		}
		else if(total_marks/No_subject<70&&total_marks/No_subject>=65)
		{
			cout<<"\t\t\tCGPA=2.3"<<endl;
			cout<<"\t\t\tGrade=C+";
			myfile<<"\t\t\tCGPA=2.3"<<endl<<"\t\t\tGrade=C+";
		}
		else if(total_marks/No_subject<65&&total_marks/No_subject>=60)
		{
			cout<<"\t\t\tCGPA=2.0"<<endl;
			cout<<"\t\t\tGrade=C(average)";
			myfile<<"\t\t\tCGPA=2.0"<<endl<<"\t\t\tGrade=C(average)";
		}
		else if(total_marks/No_subject<60&&total_marks/No_subject>=55)
		{
			cout<<"\t\t\tCGPA=1.7"<<endl;
			cout<<"\t\t\tGrade=C-";
			myfile<<"\t\t\tCGPA=1.7"<<endl<<"\t\t\tGrade=C-";
		}
		else if(total_marks/No_subject<55&&total_marks/No_subject>=50)
		{
			cout<<"\t\t\tCGPA=1.3"<<endl;
			cout<<"\t\t\tGrade=D";
			myfile<<"\t\t\tCGPA=1.3"<<endl<<"\t\t\tGrade=D";
		}
		else
		{
			cout<<"\t\t\tCGPA=0.0"<<endl;
			cout<<"\t\t\tGrade=F"<<endl<<endl;
			myfile<<"\t\t\tCGPA=0.0"<<endl<<"\t\t\tGrade=F";
		}
		myfile<<endl<<endl<<endl;
		myfile.close();
		

	return 0;
}

