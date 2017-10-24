#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;




void fix(ifstream& in_stream, ofstream& out_stream)
{

	char N;
	string word  = "";
	
	while (! in_stream.eof())
	{
		in_stream.get(N);
		if (!isspace(N))
		{ 	word = word+N;
			out_stream<<N;
			cout <<N; }
		else
			if (word.compare("cout")==0)
		{
			cout << " ";
			out_stream << " ";
			in_stream.get(N);
			
			if (N == '<')
			{	out_stream << N;
				cout << N;
				}
			while (isspace(N))
			{
				in_stream.get(N);
			}
			if (N=='>')
			{ cout << ">>";
			out_stream << ">>";
			in_stream.get(N); }
		}
			else if(word.compare("cin") ==0)
			{ out_stream << " ";
			cout << " ";
			in_stream.get(N);
			
			if (N == '>')
			{ cout << N;
			out_stream << N; }
			
			while (isspace(N))
			in_stream.get(N);
			
			if (N == '<')
			{ cout << "<<";
			out_stream << "<<";
			in_stream.get(N); }
			}
			
			else 
			{
				if (in_stream.eof())
					{return;}
				out_stream << N;
				cout << N; }

			word  = "";
		}

	return;
}
 
				
int main()
{

       
        ifstream in_stream;
        ofstream out_stream;
      	string file_name;
	 cout << "Enter filename:\n";
        cin >> file_name;
        in_stream.open(file_name);
        out_stream.open("new.txt");

        fix(in_stream, out_stream);

        in_stream.close();
        out_stream.close();


return 0;
}			
