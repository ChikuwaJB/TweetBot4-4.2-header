/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PTHTweetbotAccount, PTHTweetbotCurrentUser, PTHTweetbotOAuthURLRequest, NSMutableSet, NSMutableArray, PTHTweetbotAccountData, PTHSQLiteDatabaseConnection, NSTimer, NSDate;

@interface PTHTweetbotStreamingController : NSObject {

	PTHTweetbotAccount* _account;
	PTHTweetbotCurrentUser* _currentUser;
	BOOL _shutdown;
	PTHTweetbotOAuthURLRequest* _request;
	NSMutableSet* _friendTIDs;
	double _reconnectTime;
	NSMutableArray* _streamQueue;
	PTHTweetbotAccountData* _accountData;
	PTHSQLiteDatabaseConnection* _accountDataConnection;
	unsigned long long _backgroundTaskIdentifier;
	NSTimer* _backgroundStopTimer;
	NSDate* _backgroundStartDate;
	BOOL _doesUserBounce;
	BOOL _isStreaming;

}

@property (nonatomic,readonly) BOOL isStreaming;              //@synthesize isStreaming=_isStreaming - In the implementation block
+(id)timestampsForAccount:(id)arg1 ;
+(void)didStartStreamingAccount:(id)arg1 ;
+(BOOL)canStartStreamForAccount:(id)arg1 ;
+(void)initialize;
-(void)_handleQuoted:(id)arg1 ;
-(void)_handleFollowed:(id)arg1 ;
-(void)_didEnterBackground;
-(void)_handleBlock:(id)arg1 ;
-(void)_willEnterForeground;
-(void)_shutdownBackgroundTask;
-(void)_cancelForBackground;
-(void)runOrQueue:(/*^block*/id)arg1 ;
-(void)_handleFriends:(id)arg1 ;
-(void)_handleStatus:(id)arg1 ;
-(void)_handleDirectMessage:(id)arg1 ;
-(void)_handleDelete:(id)arg1 ;
-(void)_handleFavorite:(id)arg1 ;
-(void)_handleUnfavorite:(id)arg1 ;
-(void)_handleFollow:(id)arg1 ;
-(void)_handleUnfollow:(id)arg1 ;
-(void)_handleMute:(id)arg1 ;
-(void)_handleUnmute:(id)arg1 ;
-(void)_handleFavorited:(id)arg1 userDictionary:(id)arg2 ;
-(void)_handleUnfavorited:(id)arg1 userDictionary:(id)arg2 ;
-(void)_restart;
-(void)dealloc;
-(void)stop;
-(BOOL)start;
-(BOOL)isStreaming;
-(void)_handleUnblock:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

