/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class NSString;

@interface PTHTweetbotUserSearchCursor : PTHTweetbotCursor {

	NSString* _query;

}

@property (nonatomic,copy,readonly) NSString * query;              //@synthesize query=_query - In the implementation block
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 query:(id)arg2 ;
-(BOOL)needsSort;
-(id)requestURLString;
-(id)queryDictionary;
-(NSString *)query;
-(id)uniqueID;
@end
