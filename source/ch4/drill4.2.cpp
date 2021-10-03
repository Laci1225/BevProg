#include "../std_lib_facilities.h"

int main() {
		constexpr  double cmPerInch = 2.54;
		constexpr  double cmPerM = 100;
		constexpr  double inPerFt = 12;


		double call1;
		string unit = "";

		double max = std::numeric_limits<double>::lowest();
		double min = std::numeric_limits<double>::max();
		double sum = 0;
		
		double maxWithUnit = std::numeric_limits<double>::lowest();
		double minWithUnit = std::numeric_limits<double>::max();
		string maxAsString = "", minAsString = "";

		vector <double> allValues;
		while (cin >> call1 >> unit && call1 != '|') {

			if (unit != "cm" && unit != "in" && unit != "ft" && unit != "m")
			{	
				cout << "Illegal number. Please try again, and enter an acceptable unit (cm in ft m)\n";
				break;
			}
			else{
				if (unit == "cm")
					sum += call1/cmPerM;
				if (unit == "m")
					sum += call1;
				if (unit == "in")
					sum += call1*cmPerInch/cmPerM;
				if (unit == "ft")
					sum += call1*inPerFt*cmPerInch/cmPerM;
			}

			if (min > call1){
				min = call1;
				cout << min << " the smallest so far\n"; 
			}
			if (max < call1){
				max = call1;
			 	cout << max << " the largest so far\n";
			}
			
			double transferToM = 0;
			if (unit == "cm")
				transferToM += call1/cmPerM;
			if (unit == "m")
				transferToM += call1;
			if (unit == "in")
				transferToM += call1*cmPerInch/cmPerM;
			if (unit == "ft")
				transferToM += call1*inPerFt*cmPerInch/cmPerM;

			if (minWithUnit > transferToM) {
				minWithUnit = transferToM;
				minAsString = to_string(call1) + " " + unit;
			}
			if (maxWithUnit < transferToM) {
				maxWithUnit = transferToM;
				maxAsString =  to_string(call1) + " " + unit;
			}
			allValues.push_back(transferToM);
		}
		cout << minAsString << " the smallest with unit\n"  << maxAsString<< " the largest with unit\n";
		cout << "Sum of values: " << sum <<" m\n";
		cout << "Number of values: " << allValues.size() << '\n';
		sort(allValues);
		for (auto values : allValues)
			cout << values << " ";
		cout << '\n';

		return 0;
}