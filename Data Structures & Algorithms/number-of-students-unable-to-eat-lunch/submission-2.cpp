class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cantEat = 0;
        
        while (students.size() > 0)
        {
            int curStu = students[0];
            int curSand = sandwiches[0];

            if (curStu == curSand)
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cantEat = 0;
            }
            else
            {
                students.erase(students.begin());
                students.push_back(curStu);
                cantEat++;

                if (cantEat == students.size())
                    break;
            }
        }

        return students.size();
    }
};