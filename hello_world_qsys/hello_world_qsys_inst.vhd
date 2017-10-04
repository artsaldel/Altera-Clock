	component hello_world_qsys is
		port (
			clk_clk                            : in  std_logic                    := 'X'; -- clk
			reset_reset_n                      : in  std_logic                    := 'X'; -- reset_n
			seg1_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			seg2_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			seg3_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			seg4_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			seg5_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			seg6_external_connection_export    : out std_logic_vector(6 downto 0);        -- export
			switch_external_connection_export  : in  std_logic                    := 'X'; -- export
			button1_external_connection_export : in  std_logic                    := 'X'; -- export
			button2_external_connection_export : in  std_logic                    := 'X'; -- export
			button3_external_connection_export : in  std_logic                    := 'X'; -- export
			button4_external_connection_export : in  std_logic                    := 'X'; -- export
			leds_external_connection_export    : out std_logic_vector(4 downto 0)         -- export
		);
	end component hello_world_qsys;

	u0 : component hello_world_qsys
		port map (
			clk_clk                            => CONNECTED_TO_clk_clk,                            --                         clk.clk
			reset_reset_n                      => CONNECTED_TO_reset_reset_n,                      --                       reset.reset_n
			seg1_external_connection_export    => CONNECTED_TO_seg1_external_connection_export,    --    seg1_external_connection.export
			seg2_external_connection_export    => CONNECTED_TO_seg2_external_connection_export,    --    seg2_external_connection.export
			seg3_external_connection_export    => CONNECTED_TO_seg3_external_connection_export,    --    seg3_external_connection.export
			seg4_external_connection_export    => CONNECTED_TO_seg4_external_connection_export,    --    seg4_external_connection.export
			seg5_external_connection_export    => CONNECTED_TO_seg5_external_connection_export,    --    seg5_external_connection.export
			seg6_external_connection_export    => CONNECTED_TO_seg6_external_connection_export,    --    seg6_external_connection.export
			switch_external_connection_export  => CONNECTED_TO_switch_external_connection_export,  --  switch_external_connection.export
			button1_external_connection_export => CONNECTED_TO_button1_external_connection_export, -- button1_external_connection.export
			button2_external_connection_export => CONNECTED_TO_button2_external_connection_export, -- button2_external_connection.export
			button3_external_connection_export => CONNECTED_TO_button3_external_connection_export, -- button3_external_connection.export
			button4_external_connection_export => CONNECTED_TO_button4_external_connection_export, -- button4_external_connection.export
			leds_external_connection_export    => CONNECTED_TO_leds_external_connection_export     --    leds_external_connection.export
		);

