/**
 * Copyright Maarten Billemont (http://www.lhunath.com, lhunath@lyndir.com)
 *
 * See the enclosed file LICENSE for license information (LGPLv3). If you did
 * not receive this file, see http://www.gnu.org/licenses/lgpl-3.0.txt
 *
 * @author   Maarten Billemont <lhunath@lyndir.com>
 * @license  http://www.gnu.org/licenses/lgpl-3.0.txt
 */

//
//  NSString(MPMarkDown).h
//  NSString(MPMarkDown)
//
//  Created by lhunath on 2014-09-28.
//  Copyright, lhunath (Maarten Billemont) 2014. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(MPMarkDown)

- (NSAttributedString *)attributedMarkdownStringWithFontSize:(CGFloat)fontSize;

@end
