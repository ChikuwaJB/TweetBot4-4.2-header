/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface PTHTweetbotTwitterConfiguration : NSObject {

	unsigned long long _httpLength;
	unsigned long long _httpsLength;
	unsigned long long _photoSizeLimit;
	NSArray* _nonUsernamePaths;

}

@property (assign,nonatomic) unsigned long long httpLength;                  //@synthesize httpLength=_httpLength - In the implementation block
@property (assign,nonatomic) unsigned long long httpsLength;                 //@synthesize httpsLength=_httpsLength - In the implementation block
@property (assign,nonatomic) unsigned long long photoSizeLimit;              //@synthesize photoSizeLimit=_photoSizeLimit - In the implementation block
@property (nonatomic,copy) NSArray * nonUsernamePaths;                       //@synthesize nonUsernamePaths=_nonUsernamePaths - In the implementation block
+(id)sharedConfiguration;
-(unsigned long long)httpLength;
-(unsigned long long)httpsLength;
-(void)setNonUsernamePaths:(NSArray *)arg1 ;
-(void)setHttpLength:(unsigned long long)arg1 ;
-(void)setHttpsLength:(unsigned long long)arg1 ;
-(unsigned long long)photoSizeLimit;
-(void)setPhotoSizeLimit:(unsigned long long)arg1 ;
-(NSArray *)nonUsernamePaths;
-(void)updateConfigurationIfNeeded;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
@end

