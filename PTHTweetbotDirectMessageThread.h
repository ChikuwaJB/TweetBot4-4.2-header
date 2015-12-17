/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSMutableArray, PTHTweetbotUser, PTHTweetbotAccountMessages, NSArray, PTHTweetbotDirectMessage, NSString;

@interface PTHTweetbotDirectMessageThread : PTHTweetbotObject {

	NSMutableArray* _messages;
	BOOL _isLoading;
	PTHTweetbotUser* _otherUser;
	unsigned long long _unreadMessageCount;
	PTHTweetbotAccountMessages* _accountMessages;

}

@property (nonatomic,readonly) NSArray * messages; 
@property (nonatomic,__weak,readonly) PTHTweetbotDirectMessage * latestMessage; 
@property (nonatomic,readonly) long long otherUserTID; 
@property (nonatomic,readonly) PTHTweetbotUser * otherUser;                                    //@synthesize otherUser=_otherUser - In the implementation block
@property (assign,nonatomic) long long lastReadTID; 
@property (getter=isRead,nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount;                          //@synthesize unreadMessageCount=_unreadMessageCount - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,__weak,readonly) NSString * threadKey; 
@property (assign,nonatomic,__weak) PTHTweetbotAccountMessages * accountMessages;              //@synthesize accountMessages=_accountMessages - In the implementation block
+(id)setup:(id)arg1 userVersion:(long long)arg2 ;
+(id)verify:(id)arg1 ;
+(id)fetchAllWithConnection:(id)arg1 account:(id)arg2 ;
+(BOOL)_updateLastReadTID:(long long)arg1 threadKey:(id)arg2 ;
+(long long)lastReadTIDForThreadKey:(id)arg1 ;
+(BOOL)updateLastReadTID:(long long)arg1 threadKey:(id)arg2 ;
+(void)initialize;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(PTHTweetbotAccountMessages *)accountMessages;
-(BOOL)hasString:(id)arg1 ;
-(long long)lastReadTID;
-(void)markRead;
-(void)destroy:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)otherUser;
-(PTHTweetbotDirectMessage *)latestMessage;
-(unsigned long long)indexOfDirectMessageWithTID:(long long)arg1 ;
-(void)setLastReadTID:(long long)arg1 ;
-(void)directMessageWasDestroyed:(id)arg1 ;
-(void)replaceDirectMessageDraft:(id)arg1 withDirectMessage:(id)arg2 ;
-(long long)otherUserTID;
-(void)setAccountMessages:(PTHTweetbotAccountMessages *)arg1 ;
-(void)addDirectMessage:(id)arg1 ;
-(id)messageWithTID:(long long)arg1 ;
-(void)removeDirectMessageAtIndex:(unsigned long long)arg1 ;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 messages:(id)arg3 ;
-(void)_updateCounts;
-(void)_sendThreadWasUpdated;
-(void)store;
-(id)description;
-(unsigned long long)messageCount;
-(BOOL)isRead;
-(unsigned long long)unreadMessageCount;
-(NSArray *)messages;
-(NSString *)threadKey;
-(void)setAccount:(id)arg1 ;
@end

