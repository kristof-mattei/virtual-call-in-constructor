namespace VirtualCallInConstructorCs
{
    using System;

    internal class Child : Base
    {
        private readonly Bar bar;

        public Child()
            : base()
        {
            this.bar = new Bar();
        }

        public override void Foo()
        {
            this.bar.value = new Random().Next(0, 100);
        }
    }
}