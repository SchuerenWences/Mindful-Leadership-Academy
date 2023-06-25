#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;

// LeadParser class declaration
class LeadParser 
{
    private: 
        map <string, string> leadAttr; 
        string  leadName;
        string leadAge;
        string leadEmail;
        string leadLocation;
    public: 
        LeadParser(); 
        string getLeadName();
        string getLeadAge();
        string getLeadEmail();
        string getLeadLocation();
        void setLeadName(string name);
        void setLeadAge(string age);
        void setLeadEmail(string email);
        void setLeadLocation(string location);
        void addLead(); 
        void printLeads(); 
}; 

// Constructor
LeadParser::LeadParser() 
{ 
  leadName = ""; 
  leadAge = "";
  leadEmail = ""; 
  leadLocation = ""; 
}

string LeadParser::getLeadName() 
{
    return leadName; 
}

string LeadParser::getLeadAge()
{
    return leadAge;
}

string LeadParser::getLeadEmail()
{
    return leadEmail;
}

string LeadParser::getLeadLocation()
{
    return leadLocation;
}

void LeadParser::setLeadName(string name) 
{
    leadName = name;
}

void LeadParser::setLeadAge(string age)
{
    leadAge = age;
}

void LeadParser::setLeadEmail(string email)
{
    leadEmail = email;
}

void LeadParser::setLeadLocation(string location)
{
    leadLocation = location;
}

// adds all the lead details to a map
void LeadParser::addLead() 
{ 
    leadAttr["Name"] = leadName; 
    leadAttr["Age"] = leadAge; 
    leadAttr["Email"] = leadEmail; 
    leadAttr["Location"] = leadLocation; 
}

// prints lead details
void LeadParser::printLeads() 
{ 
    cout << "Lead Name: " << leadAttr["Name"] << endl; 
    cout << "Lead Age: " << leadAttr["Age"] << endl; 
    cout << "Lead Email: " << leadAttr["Email"] << endl; 
    cout << "Lead Location: " << leadAttr["Location"] << endl; 
} 

// main function 
int main() 
{ 
    // Initialize lead object 
    LeadParser lead1; 
  
    // Set lead1 values 
    lead1.setLeadName("John Doe"); 
    lead1.setLeadAge("30"); 
    lead1.setLeadEmail("john@gmail.com"); 
    lead1.setLeadLocation("New York"); 
  
    // Add lead1 to leadAttr map 
    lead1.addLead(); 
  
    // Print lead1 values 
    lead1.printLeads(); 
  
    return 0; 
} 

// Leadership Training Program class declaration
class LeadTrainProg 
{
    private: 
        string trainingName;
        string trainingDesc;
        string trainingFee;
        string trainingDuration;
        string trainingLocation;
    public: 
        LeadTrainProg(); 
        string getTrainingName(); 
        string getTrainingDesc(); 
        string getTrainingFee(); 
        string getTrainingDuration(); 
        string getTrainingLocation(); 
        void setTrainingName(string name); 
        void setTrainingDesc(string desc); 
        void setTrainingFee(string fee); 
        void setTrainingDuration(string duration); 
        void setTrainingLocation(string location); 
        void printLeadTrainProgDetails(); 
};

// Constructor
LeadTrainProg::LeadTrainProg() 
{
    trainingName = "";
    trainingDesc = ""; 
    trainingFee = ""; 
    trainingDuration = ""; 
    trainingLocation = "";
}

string LeadTrainProg::getTrainingName() 
{ 
    return trainingName; 
} 

string LeadTrainProg::getTrainingDesc() 
{ 
    return trainingDesc; 
} 

string LeadTrainProg::getTrainingFee() 
{ 
    return trainingFee; 
}

string LeadTrainProg::getTrainingDuration() 
{ 
    return trainingDuration; 
}

string LeadTrainProg::getTrainingLocation() 
{ 
    return trainingLocation; 
}

void LeadTrainProg::setTrainingName(string name) 
{ 
    trainingName = name; 
} 

void LeadTrainProg::setTrainingDesc(string desc) 
{ 
    trainingDesc = desc; 
} 

void LeadTrainProg::setTrainingFee(string fee) 
{ 
    trainingFee = fee; 
} 

void LeadTrainProg::setTrainingDuration(string duration) 
{ 
    trainingDuration = duration; 
}

void LeadTrainProg::setTrainingLocation(string location) 
{ 
    trainingLocation = location; 
}

// prints training program details
void LeadTrainProg::printLeadTrainProgDetails() 
{ 
    cout << "Training Name: " << trainingName << endl; 
    cout << "Training Description: " << trainingDesc << endl; 
    cout << "Training Fee: " << trainingFee << endl; 
    cout << "Training Duration: " << trainingDuration << endl; 
    cout << "Training Location: " << trainingLocation << endl;
} 

// main function
int main() 
{ 
    LeadTrainProg ltp; 
    ltp.setTrainingName("Leadership Skills Training");
    ltp.setTrainingDesc("A two-month program that teaches leadership skills");
    ltp.setTrainingFee("$500");
    ltp.setTrainingDuration("2 months");
    ltp.setTrainingLocation("New York");
  
    // Print LeadTrainProg values 
    ltp.printLeadTrainProgDetails(); 
  
    return 0; 
}