declare module 'bounds' {
  declare type Foo<T: {bar: number}> = {
    prop: T
  }
}

