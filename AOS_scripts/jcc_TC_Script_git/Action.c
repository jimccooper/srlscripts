//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("HomePage");
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("HomePage",0);
	lr_start_transaction("ShopNow");
	truclient_step("2", "Click on Shop Now label", "snapshot=Action_2.inf");
	lr_end_transaction("ShopNow",0);
	lr_start_transaction("RoarWireless");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_end_transaction("RoarWireless",0);
	lr_start_transaction("VErifyPrice");
	truclient_step("4", "Verify $44.99 's Visible Text contains $44.99", "snapshot=Action_4.inf");
	lr_end_transaction("VErifyPrice",0);
	lr_start_transaction("ReturnHome");
	truclient_step("5", "Click on HOME link", "snapshot=Action_5.inf");
	lr_end_transaction("ReturnHome",0);

	return 0;
}
