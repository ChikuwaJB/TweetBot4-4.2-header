/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSDate, NSString;

@interface PTHTweetbotSavedSearch : PTHTweetbotObject {

	NSDate* _createdAt;
	NSString* _name;
	NSString* _query;

}

@property (nonatomic,retain) NSDate * createdAt;              //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * query;                  //@synthesize query=_query - In the implementation block
+(void)createWithQuery:(id)arg1 forAccount:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)destroy:(/*^block*/id)arg1 ;
-(void)updateFromDictionary:(id)arg1 ;
-(void)refresh:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
@end

