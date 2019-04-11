//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("SRL_jcc_01_Homepage");
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("SRL_jcc_01_Homepage",0);
	lr_start_transaction("SRL_jcc_02_Speakers");
	truclient_step("2", "Click on Shop Now label", "snapshot=Action_2.inf");
	lr_end_transaction("SRL_jcc_02_Speakers",0);
	lr_start_transaction("SRL_jcc_03_Roarwireless");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	truclient_step("4", "Verify $44.99 's Visible Text contains $44.99", "snapshot=Action_4.inf");
	lr_end_transaction("SRL_jcc_03_Roarwireless",0);

	return 0;
}
