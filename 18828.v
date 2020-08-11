Require Export D.
Require Export Coq.Logic.Classical_Prop.
Theorem double_negation_excluded_middle : 이중부정 -> 배중률.
Proof.
  repeat intros _; intros x; apply classic.
Qed.
Theorem excluded_middle_square : 제곱수 는 극단적이야! .
Proof.
  repeat intros _; intros x; apply classic.
Qed.
Theorem excluded_middle_prime : 소수 는 극단적이야! .
Proof.
  repeat intros _; intros x; apply classic.
Qed.
