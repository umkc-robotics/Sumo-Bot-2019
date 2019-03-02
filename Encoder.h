class Encoder {
	protected:
		volatile long encCount;
		virtual void initEncoder() = 0;
	public:
		virtual long getCount() = 0;
		virtual void resetCount() = 0;
		virtual void setCount(long newCount) = 0;
		virtual void incrementCount() = 0;
		virtual void decrementCount() = 0;
		virtual void checkEncoder() = 0;
		virtual void checkEncoderFlipped() = 0;
};
