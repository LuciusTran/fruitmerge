using System.Collections.Generic;
using System.IO;

namespace LitJson
{
	public class JsonReader
	{
		private static readonly IDictionary<int, IDictionary<int, int[]>> parse_table;

		private Stack<int> automaton_stack;

		private int current_input;

		private int current_symbol;

		private bool end_of_json;

		private bool end_of_input;

		private Lexer lexer;

		private bool parser_in_string;

		private bool parser_return;

		private bool read_started;

		private TextReader reader;

		private bool reader_is_owned;

		private bool skip_non_members;

		private object token_value;

		private JsonToken token;

		public bool AllowComments
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool AllowSingleQuotedStrings
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool SkipNonMembers
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool EndOfInput => false;

		public bool EndOfJson => false;

		public JsonToken Token => JsonToken.None;

		public object Value => null;

		static JsonReader()
		{
		}

		public JsonReader(string json_text)
		{
		}

		public JsonReader(TextReader reader)
		{
		}

		private JsonReader(TextReader reader, bool owned)
		{
		}

		private static IDictionary<int, IDictionary<int, int[]>> PopulateParseTable()
		{
			return null;
		}

		private static void TableAddCol(IDictionary<int, IDictionary<int, int[]>> parse_table, ParserToken row, int col, params int[] symbols)
		{
		}

		private static void TableAddRow(IDictionary<int, IDictionary<int, int[]>> parse_table, ParserToken rule)
		{
		}

		private void ProcessNumber(string number)
		{
		}

		private void ProcessSymbol()
		{
		}

		private bool ReadToken()
		{
			return false;
		}

		public void Close()
		{
		}

		public bool Read()
		{
			return false;
		}
	}
}
