/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class PTHTweetbotUser, PTHTweetbotCursor, NSString;

@interface PTHTweetbotList : PTHTweetbotObject {

	PTHTweetbotUser* _user;
	PTHTweetbotCursor* _statusesCursor;
	BOOL _private;
	NSString* _name;
	NSString* _slug;
	NSString* _fullName;
	NSString* _listDescription;
	long long _userTID;
	NSString* _userScreenName;
	long long _subscriberCount;
	long long _memberCount;

}

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * slug;                                        //@synthesize slug=_slug - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * listDescription;                             //@synthesize listDescription=_listDescription - In the implementation block
@property (nonatomic,readonly) BOOL isFromCurrentUser; 
@property (assign,nonatomic) long long userTID;                                    //@synthesize userTID=_userTID - In the implementation block
@property (nonatomic,copy) NSString * userScreenName;                              //@synthesize userScreenName=_userScreenName - In the implementation block
@property (nonatomic,readonly) PTHTweetbotUser * user; 
@property (assign,getter=isPrivate,nonatomic) BOOL private;                        //@synthesize private=_private - In the implementation block
@property (assign,nonatomic) long long subscriberCount;                            //@synthesize subscriberCount=_subscriberCount - In the implementation block
@property (assign,nonatomic) long long memberCount;                                //@synthesize memberCount=_memberCount - In the implementation block
@property (nonatomic,readonly) PTHTweetbotCursor * statusesCursor; 
@property (nonatomic,readonly) PTHTweetbotCursor * membersCursor; 
@property (nonatomic,readonly) PTHTweetbotCursor * subscribersCursor; 
+(void)createWithName:(id)arg1 privacy:(BOOL)arg2 description:(id)arg3 forAccount:(id)arg4 result:(/*^block*/id)arg5 ;
-(NSString *)userScreenName;
-(long long)userTID;
-(BOOL)hasString:(id)arg1 ;
-(void)destroy:(/*^block*/id)arg1 ;
-(BOOL)isFromCurrentUser;
-(id)initWithUser:(id)arg1 slug:(id)arg2 ;
-(PTHTweetbotCursor *)statusesCursor;
-(void)unsubscribe:(/*^block*/id)arg1 ;
-(PTHTweetbotCursor *)membersCursor;
-(void)addMember:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)removeMember:(id)arg1 result:(/*^block*/id)arg2 ;
-(NSString *)listDescription;
-(void)updateListWithName:(id)arg1 privacy:(BOOL)arg2 description:(id)arg3 result:(/*^block*/id)arg4 ;
-(PTHTweetbotCursor *)subscribersCursor;
-(void)checkSubscription:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)updateFromDictionary:(id)arg1 ;
-(void)setUserScreenName:(NSString *)arg1 ;
-(void)setUserTID:(long long)arg1 ;
-(void)setSlug:(NSString *)arg1 ;
-(NSString *)slug;
-(void)setListDescription:(NSString *)arg1 ;
-(void)setMemberCount:(long long)arg1 ;
-(void)setPrivate:(BOOL)arg1 ;
-(void)checkMembership:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)queryDictionary;
-(void)subscribe:(/*^block*/id)arg1 ;
-(void)refresh:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(long long)memberCount;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(long long)subscriberCount;
-(void)setSubscriberCount:(long long)arg1 ;
-(void)setAccount:(id)arg1 ;
-(BOOL)isPrivate;
@end

