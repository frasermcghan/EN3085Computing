#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;

void readFile(ifstream &myfile)
{	
	

	if (myfile)
	{
		string name, str;
		string line;
		float value = 0.0;
		float consumption = 0.0;

		string equipmentNameInfo[500];
		float equipmentValueInfo[500];
		float equipmentConsumptionInfo[500];
		int count = 0;
		float total_value = 0.0;
		float total_consumption = 0.0;



		while (getline(myfile, line))
		{	
			stringstream s(line);

			vector<string> v;
			while (getline(s, str, ','))
			{
					v.push_back(str);
			}
			
			equipmentNameInfo[count] = v[0];
			equipmentValueInfo[count] = stof(v[1]);
			equipmentConsumptionInfo[count] = stof(v[2]);

			count += 1;
		}

		myfile.close();

		cout << "There are " << count << " pieces of equipment." << endl << endl;

		for (int i=0; i<count; i++)
		{
			cout << "Name: " << setw(8) << equipmentNameInfo[i] << " | "
					"Value: " << setw(8) << equipmentValueInfo[i] << " | "
					"Consumption: " << setw(8) << equipmentConsumptionInfo[i] << endl;

			total_value += equipmentValueInfo[i];
			total_consumption += equipmentConsumptionInfo[i];
		}

		cout << endl;
		cout << "Total value: " << total_value << endl;
		cout << "Total consumption: " << total_consumption << endl;
	}
	else
	{
		cout << "File EquipmentInfo.txt does not exist." << endl;
	}
	
	
}