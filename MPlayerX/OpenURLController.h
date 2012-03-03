/*
 * MPlayerX - OpenURLController.h
 *
 * Copyright (C) 2009 - 2012, Zongyao QU
 * 
 * MPlayerX is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * MPlayerX is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MPlayerX; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#import <Cocoa/Cocoa.h>

@class PlayerController;

@interface OpenURLController : NSObject
{
	IBOutlet PlayerController *playerController;
	
	IBOutlet NSPanel *openURLPanel;
	IBOutlet NSComboBox *urlBox;
	IBOutlet NSTextField *cmdOptionalText;
}

-(IBAction) openURL:(id) sender;
-(IBAction) confirmed:(id) sender;
-(IBAction) canceled:(id) sender;

-(void) initURLList:(NSDictionary*)list;
-(void) addUrl:(NSString*)urlString;
-(void) syncToBookmark:(NSMutableDictionary*)bmk;

-(IBAction) urlSelected:(id)sender;

@end
