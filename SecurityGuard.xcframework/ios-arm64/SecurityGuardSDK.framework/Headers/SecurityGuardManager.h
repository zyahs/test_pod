//
//  SecurityGuardManager.h
//  SecurityGuardSDK
//
//  Created by Breeze on 2023/2/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SecurityGuardManager : NSObject

//初始化
+(BOOL)setup;

//Dynamic
/**
 *(NEW) 数据加密
 @param input 待加密数据
 @return 加密后数据
 */
+ (NSData *)Crypto_Dynamic_Encryption:(NSData *)input;

/**
*(NEW)数据解密

 @param input 待解密数据
 @return 解密后数据
 */
+ (NSData *)Crypto_Dynamic_Decryption:(NSData *)input;
/**
 *(NEW)数据加密
  @param key 加密 key(一般为偏移,可不填)
  @param input 待加密数据
  @param type 加密方式
  @return 解密后数据
 */

+ (NSData *)Crypto_Situation_Encryption:(NSData *)key WithContent:(NSData *)input WithType:(NSString *)type;
/**
 *(NEW)数据加密
  @param key 加密 key(一般为偏移,可不填)
  @param input 待加密数据
  @param type 加密方式
  @return 解密后数据
 */
+ (NSData *)Crypto_Situation_Decryption:(NSData *)key WithContent:(NSData *)input WithType:(NSString *)type;
/**
 数据隐写读取
 */
+ (NSData *)Crypto_Steganographic_Reading:(NSString *)key WithimagePath:(NSString *)path;
/**
 获取安全签名
 @param tm 时间戳
 @param data 待签名body
 */
+ (NSString*) getSign : (NSString*)tm data:(NSData*)data;
/**
 安全签名时间戳
 */
+ (NSString*) getTm;
@end

NS_ASSUME_NONNULL_END
