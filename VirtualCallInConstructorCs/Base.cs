namespace VirtualCallInConstructorCs
{
    internal class Base
    {
        public Base()
        {
            this.Foo();
        }

        public virtual void Foo()
        {
        }
    }
}