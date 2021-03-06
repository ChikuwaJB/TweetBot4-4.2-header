/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotWatchObject.h>

@class PTHTweetbotUser, NSString, NSURL;

@interface PTHTweetbotWatchUser : PTHTweetbotWatchObject {

	PTHTweetbotUser* _tweetbotUser;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * screenName; 
@property (nonatomic,copy,readonly) NSString * location; 
@property (nonatomic,copy,readonly) NSString * userDescription; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) long long followersCount; 
@property (nonatomic,readonly) long long followingCount; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isFollowedByCurrentUser,nonatomic,readonly) BOOL followedByCurrentUser; 
@property (nonatomic,readonly) BOOL followsCurrentUser; 
@property (nonatomic,readonly) BOOL canDirectMessage; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) PTHTweetbotUser * tweetbotUser;                                         //@synthesize tweetbotUser=_tweetbotUser - In the implementation block
+(BOOL)handleWatchMessage:(id)arg1 watchReplyHandler:(/*^block*/id)arg2 ;
+(void)handleGet:(id)arg1 watchReplyHandler:(/*^block*/id)arg2 ;
+(void)handleAvatarGet:(id)arg1 size:(CGSize)arg2 watchReplyHandler:(/*^block*/id)arg3 ;
+(void)handleFollow:(id)arg1 watchReplyHandler:(/*^block*/id)arg2 ;
+(void)handleUnfollow:(id)arg1 watchReplyHandler:(/*^block*/id)arg2 ;
+(void)handleBannerGet:(id)arg1 size:(CGSize)arg2 watchReplyHandler:(/*^block*/id)arg3 ;
+(void)loadFromTweetbotUser:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initWithTweetbotUser:(id)arg1 ;
-(long long)followingCount;
-(BOOL)canDirectMessage;
-(BOOL)isFollowedByCurrentUser;
-(BOOL)followsCurrentUser;
-(NSString *)userDescription;
-(PTHTweetbotUser *)tweetbotUser;
-(BOOL)isBlocked;
-(id)relationship;
-(BOOL)isCurrentUser;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSURL *)url;
-(NSString *)location;
-(id)dictionaryRepresentation;
-(long long)followersCount;
-(NSString *)screenName;
@end

