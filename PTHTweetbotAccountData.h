/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHSQLiteDatabase2.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableArray, PTHTweetbotAccountDataBlocksLoader, PTHTweetbotAccountDataFriendsLoader, PTHTweetbotAccountDataFollowersLoader, PTHTweetbotAccountDataMutesLoader, PTHTweetbotAccountDataNoRetweetsLoader, PTHTweetbotAccountDataUserLoader, PTHTweetbotAccountDataHashtagFinder, PTHTweetbotAccountDataInteractionsLoader, PTHTweetbotAccountDataStatisticsMonitor, PTHTweetbotAccountDataActivityMonitor, PTHTweetbotAccount;

@interface PTHTweetbotAccountData : PTHSQLiteDatabase2 {

	NSObject*<OS_dispatch_source> _updateTimer;
	NSMutableArray* _loaders;
	PTHTweetbotAccountDataBlocksLoader* _blocksLoader;
	PTHTweetbotAccountDataFriendsLoader* _friendsLoader;
	PTHTweetbotAccountDataFollowersLoader* _followersLoader;
	PTHTweetbotAccountDataMutesLoader* _mutesLoader;
	PTHTweetbotAccountDataNoRetweetsLoader* _noRetweetsLoader;
	PTHTweetbotAccountDataUserLoader* _userLoader;
	PTHTweetbotAccountDataHashtagFinder* _hashtagFinder;
	PTHTweetbotAccountDataInteractionsLoader* _interactionsLoader;
	PTHTweetbotAccountDataStatisticsMonitor* _statisticsMonitor;
	PTHTweetbotAccountDataActivityMonitor* _recentInteractionsMonitor;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,__weak,readonly) PTHTweetbotAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAccountDataStatisticsMonitor * statisticsMonitor;                    //@synthesize statisticsMonitor=_statisticsMonitor - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAccountDataActivityMonitor * recentInteractionsMonitor;              //@synthesize recentInteractionsMonitor=_recentInteractionsMonitor - In the implementation block
-(void)dispatchFindFriendsThatFollow:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindUsers:(id)arg1 options:(unsigned long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(PTHTweetbotAccountDataActivityMonitor *)recentInteractionsMonitor;
-(PTHTweetbotAccountDataStatisticsMonitor *)statisticsMonitor;
-(void)dispatchFindHashtags:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindInteractionsSinceDate:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindQuoteTIDsSinceTID:(long long)arg1 maxTID:(long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionCountsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 type:(unsigned char)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dispatchFindRecentStatusesWithInteractions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindRecentInteractions:(unsigned char)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindDailyInteractionCounts:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isProbablyBlocked:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyNoRetweet:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyServerMuted:(id)arg1 connection:(id)arg2 ;
-(void)didAddTIDs:(unsigned long long)arg1 loader:(id)arg2 ;
-(BOOL)isProbablyFollower:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyFriend:(id)arg1 connection:(id)arg2 ;
-(void)verify:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setup:(id)arg1 userVersion:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateIfNeeded;
-(void)dealloc;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(void)_forceUpdate;
-(void)delete;
-(id)initWithAccount:(id)arg1 ;
-(void)log:(/*^block*/id)arg1 ;
-(PTHTweetbotAccount *)account;
@end

