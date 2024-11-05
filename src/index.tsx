const FunLoadings = require('./NativeFunLoadings').default;

export function multiply(a: number, b: number): number {
  return FunLoadings.multiply(a, b);
}
