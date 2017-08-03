type fooT 'a = Js.t { .. bar: float } as 'a;
type foo 't = Js.t {. prop: 't } constraint 't = fooT 't;
