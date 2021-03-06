/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSError, NSException;

@interface PTHTweetbotError : NSObject {

	BOOL _hidden;
	NSString* _title;
	NSString* _message;
	NSError* _error;
	long long _twitterErrorCode;
	NSException* _exception;
	NSString* _okTitle;
	/*^block*/id _okBlock;
	NSString* _cancelTitle;
	/*^block*/id _cancelBlock;
	NSString* _otherTitle;
	/*^block*/id _otherBlock;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long twitterErrorCode;               //@synthesize twitterErrorCode=_twitterErrorCode - In the implementation block
@property (nonatomic,retain) NSException * exception;                  //@synthesize exception=_exception - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * okTitle;                         //@synthesize okTitle=_okTitle - In the implementation block
@property (nonatomic,copy) id okBlock;                                 //@synthesize okBlock=_okBlock - In the implementation block
@property (nonatomic,copy) NSString * cancelTitle;                     //@synthesize cancelTitle=_cancelTitle - In the implementation block
@property (nonatomic,copy) id cancelBlock;                             //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) NSString * otherTitle;                      //@synthesize otherTitle=_otherTitle - In the implementation block
@property (nonatomic,copy) id otherBlock;                              //@synthesize otherBlock=_otherBlock - In the implementation block
+(id)userCancelledTweetbotError;
+(id)authenticationError;
+(id)tweetbotErrorWithError:(id)arg1 ;
+(id)tweetbotErrorWithTitle:(id)arg1 ;
+(id)notFoundError;
+(id)tweetbotErrorWithException:(id)arg1 ;
+(id)genericError;
-(void)setOkTitle:(NSString *)arg1 ;
-(void)setOkBlock:(id)arg1 ;
-(void)setCancelTitle:(NSString *)arg1 ;
-(void)setOtherTitle:(NSString *)arg1 ;
-(void)setOtherBlock:(id)arg1 ;
-(NSString *)okTitle;
-(NSString *)otherTitle;
-(id)okBlock;
-(id)otherBlock;
-(void)setTwitterErrorCode:(long long)arg1 ;
-(long long)twitterErrorCode;
-(NSError *)error;
-(void)setException:(NSException *)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(long long)code;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)cancelBlock;
-(void)setError:(NSError *)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(NSString *)cancelTitle;
-(NSException *)exception;
@end

