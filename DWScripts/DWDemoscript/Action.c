//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/#/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on SPEAKERS link", "snapshot=Action_2.inf");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	truclient_step("4", "Click on HOME link", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Shop Now label", "snapshot=Action_5.inf");
	truclient_step("6", "Click on image (2) image", "snapshot=Action_6.inf");
	truclient_step("7", "Click on HOME link", "snapshot=Action_7.inf");

	return 0;
}
