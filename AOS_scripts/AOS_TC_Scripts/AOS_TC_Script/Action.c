//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Home_page");
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/#/'", "snapshot=Action_1.inf");
	lr_end_transaction("Home_page",0);
	lr_start_transaction("Visit_speakers");
	truclient_step("2", "Click on SPEAKERS link", "snapshot=Action_2.inf");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_end_transaction("Visit_speakers",0);
	truclient_step("4", "Verify $44.99 's Visible Text contains $44.99", "snapshot=Action_4.inf");
	lr_start_transaction("Return_Home_page");
	truclient_step("5", "Click on HOME link", "snapshot=Action_5.inf");
	lr_end_transaction("Return_Home_page",0);

	return 0;
}
