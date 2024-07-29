#include<iostream>

using namespace std;
//Ques1 
struct SCP {
    // Student answer
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;

};
//ques2
SCP createSCP(int id, int objClass, string speConProcedures, string description, string* addendums, int numAddendums){
    return (SCP) {id,objClass,speConProcedures,description,addendums,numAddendums};
}

//ques 3
string convertToString(SCP obj){
    string s = "Item #: SCP-"+((obj.id / 100) > 0? to_string(obj.id) : (obj.id /10 > 0? "0"+to_string(obj.id):"00"+to_string(obj.id)))+"\n"
    +"Object Class: "+ (obj.objClass == 0 ? "Safe":(obj.objClass == 1 ? "Euclid":"Keter"))+"\n"
    +"Special Containment Procedures: "+obj.speConProcedures+"\n"
    +"Description: "+obj.description;

    for(int i = 0; i < obj.numAddendums; i++){
        s+= "\n";
        s+= obj.addendums[i];
    }
    return s;

}

//ques 4
void addAddendum(SCP &obj, string addendum){
    string* newAddnum = new string[obj.numAddendums+1];
    for(int i = 0;  i < obj.numAddendums; i++){
        newAddnum[i] = obj.addendums[i];
    }
    newAddnum[obj.numAddendums] =  addendum;
    delete[] obj.addendums;
    obj.addendums= newAddnum;
    obj.numAddendums++;
}



//ques 5
SCP* cloneSCP(SCP* original) {
    SCP* newSCP = new SCP;
    newSCP->id = original->id;
    newSCP->objClass = original->objClass;
    newSCP->speConProcedures= original->speConProcedures;
    newSCP->description= original->description;
    // newSCP->addendums= original->addendums;
    newSCP->addendums = new string[original->numAddendums];
    for (int i = 0; i < original->numAddendums; ++i) {
        newSCP->addendums[i] = original->addendums[i];
    }
    newSCP->numAddendums = original->numAddendums;

    return newSCP;
}

//ques 6
SCP** sortDatabase(SCP** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j]->id > arr[j + 1]->id) {
                SCP* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

//ques 7
int compareObjectClass(const SCP &objA, const SCP &objB) {
    if(objA.objClass == objB.objClass) return 0;
    if(objA.objClass > objB.objClass){
        return 1;
    }else{
        return -1;
    }
}





int main(){
    // string* addendums = new string[2];
    // addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    // addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    // SCP obj {115, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    // cout << convertToString(obj);

    // delete [] addendums;

    	
    // string* addendums = new string[1];
    // addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";

    // SCP obj {55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 1};

    // addAddendum(obj, "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.");

    // cout << obj.addendums[1];

    // delete [] obj.addendums;

    	
    // string* addendums = new string[2];
    // addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    // addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    // SCP* obj = new SCP {55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    // SCP* newObj = cloneSCP(obj);

    // obj->id = 1;
    // cout << obj->id << " " << newObj->id << "\n";

    // // cout << obj->numAddendums << " " << newObj->numAddendums << "\n";
    // delete [] obj->addendums;
    // delete obj;

    // delete [] newObj->addendums;
    // delete newObj;

    SCP objA {2, 2, "SCP-002 is to remain connected to a suitable power supply at all times.", "SCP-002 resembles a tumorous, fleshy growth with a volume of roughly 60 cubed meter.", nullptr, 0};
    SCP objB {55, 1, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", nullptr, 0};
    cout << compareObjectClass(objA, objB);


    return 0;
}