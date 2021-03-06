/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataMonitor.h>

@class PTHTweetbotStatus, NSMutableSet, NSArray;

@interface PTHTweetbotAccountDataStatusStatisticsMonitor : PTHTweetbotAccountDataMonitor {

	PTHTweetbotStatus* _status;
	BOOL _isUpdating;
	NSMutableSet* _badUserTIDs;
	NSMutableSet* _badStatusTIDs;
	NSArray* _retweeters;
	NSArray* _favoriters;
	NSArray* _replies;
	NSArray* _quotes;

}

@property (nonatomic,copy) NSArray * retweeters;              //@synthesize retweeters=_retweeters - In the implementation block
@property (nonatomic,copy) NSArray * favoriters;              //@synthesize favoriters=_favoriters - In the implementation block
@property (nonatomic,copy) NSArray * replies;                 //@synthesize replies=_replies - In the implementation block
@property (nonatomic,copy) NSArray * quotes;                  //@synthesize quotes=_quotes - In the implementation block
-(NSArray *)retweeters;
-(NSArray *)favoriters;
-(id)initWithAccountData:(id)arg1 ;
-(void)update:(BOOL)arg1 streamed:(BOOL)arg2 ;
-(void)setFavoriters:(NSArray *)arg1 ;
-(void)setRetweeters:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
-(id)initWithStatus:(id)arg1 ;
-(NSArray *)quotes;
-(void)setQuotes:(NSArray *)arg1 ;
-(void)_sendDidChange;
@end

