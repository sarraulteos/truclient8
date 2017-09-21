//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'ww.google.com'", "snapshot=Action_1.inf");
	truclient_step("2", "Mouse Over", "snapshot=Action_2.inf");
	{
		truclient_step("2.2", "Move mouse over Google SearchI'm Feeling...", "snapshot=Action_2.2.inf");
	}
	truclient_step("3", "search (1)", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on Search combobox", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Type perro in Search combobox", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Press Enter key on Search combobox", "snapshot=Action_3.3.inf");
	}
	truclient_step("5", "Click on Images link", "snapshot=Action_5.inf");

	return 0;
}
