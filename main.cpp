/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include "htmlform.h"

using namespace std;

int main()
{
  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform robot;
  
  robot.getPostData(); /// reads the form and inits the object

  /// Show the debugging (optional)
  robot.debug();

  /// the output ('name' is in the html form that started this)
  cout  << " <p> On Saturday, stakes were high, circuits "
  << robot.getField("gerund")
  << ", with a rather “electric” excitement in the air. The Siebel Center at the University of Illinois hosted various Midwest colleges for the second annual "
  << robot.getField("c_word")
  << " Clash, a robotics competition. The students worked for months to design robots that could efficiently complete tasks — in this case, a mini-game. The competition featured "
  << robot.getField("number1")
  << " schools from across "
  << robot.getField("location")
  << ", and with a trip to the world competition on the line, their bots were put to the test. "
  << "\"A college will build two robots, and another college will build two robots, and they'll basically battle in an objective-based game,\" Event Manager Husain Badri said."
  << endl << "</p>"
  << "<p> The game this year was to have the bots push "
  << robot.getField("smallObject")
  << "-shaped balls into a "
  << robot.getField("largeObject")
  << " for points."
  << " Badri said students do this event out of "
  << robot.getField("emotion")
  << ", not grades. "
  << "\"A lot of these students are doing this as a hobby, you know, especially when they're coming to the college time."
  << " They've been doing this a lot in high school, and they're doing this in college with their classes now. They're doing this more as a hobby, as a safe place to get away from their "
  << robot.getField("plural1")
  << " and to spend time with the robots.\" Unlike some popular robotic competitions that feature destruction as the main goal,"
  << " Event Coordinator Praven Kaluna said task-based games ignite creativity."
  << "\"Every year, there's a new competition, there are new "
  << robot.getField("plural2")
  << " that you have to deal with and you feel that you have to be familiar with,\", Kaluna said. "
  << "\"So, unlike Battlebots where you kind of build the same type of robot every year, you have to kind of think new every single year designing a completely new robot."
  << " And so I think that brings up a lot of ingenuity in the design process with these robots.\""
  << endl << "<p/>"
  << "<p>The President of Illini Vex Robotics, Anes Kim, agrees. \"It's really interesting how teams all come up with different designs every year."
  << " Like the task itself remains the same, but everyone comes up with different ideas. So I always love seeing that, in the eight years I've been in robotics.\""
  << " The winner of the challenge will receive the "
  << robot.getField("adjective")
  << " Award. It's given to the team that shows the best skills, both in the tournament and in the design process. They will compete for the world competition in "
  << robot.getField("city") << " in " << robot.getField("year") << "."
  << " \"If you're taking all those skills and actually utilizing them and getting all these to the world championship because of those skills, I think it's very important,\" Badri said."
  << " \"And you know, it's a really good recognition, especially in the college time.\""
  << " Competitors returned to campus Sunday to host another "
  << robot.getField("c_word")
  << " Clash — this time with "
  << robot.getField("number2")
  << " high school teams. </p>";
 
  return 0;
}
