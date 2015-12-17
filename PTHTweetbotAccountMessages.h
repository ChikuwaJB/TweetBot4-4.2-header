/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHSQLiteDatabase2.h>

@class NSMutableArray, NSMutableDictionary, PTHTweetbotAccount, NSDate, NSArray;

@interface PTHTweetbotAccountMessages : PTHSQLiteDatabase2 {

	BOOL _hasLoaded;
	NSMutableArray* _refreshBlocks;
	NSMutableDictionary* _threadsByTID;
	long long _latestReceivedTID;
	long long _latestSentTID;
	PTHTweetbotAccount* _account;
	NSDate* _lastRefreshDate;

}

@property (nonatomic,__weak,readonly) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshed; 
@property (nonatomic,readonly) NSDate * lastRefreshDate;                         //@synthesize lastRefreshDate=_lastRefreshDate - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * threads; 
-(void)refreshIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)hasRefreshed;
-(id)addDraft:(id)arg1 ;
-(id)directMessageThreadForUser:(id)arg1 ;
-(void)loadDirectMessageWithTID:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)postDraft:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendMessagesDidUpdate;
-(id)directMessageThreadForUserTID:(long long)arg1 ;
-(void)addDirectMessage:(id)arg1 ;
-(void)_handleMessages:(id)arg1 ;
-(void)removeDirectMessageWithTID:(long long)arg1 ;
-(void)directMessageThreadWasDestroyed:(id)arg1 ;
-(void)verify:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setup:(id)arg1 userVersion:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)didOpenConnection:(id)arg1 ;
-(void)refresh:(/*^block*/id)arg1 ;
-(void)_refresh;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(NSDate *)lastRefreshDate;
-(NSArray *)threads;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
@end

