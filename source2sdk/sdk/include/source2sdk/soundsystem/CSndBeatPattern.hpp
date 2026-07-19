#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SndBeatEventKeyedFloats_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeyedMidiNotes_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeyedSndEvts_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeys_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventType_t.hpp"
#include "source2sdk/soundsystem/SndBeatKeyType_t.hpp"
#include "source2sdk/soundsystem/SndBeatLaunchSyncType_t.hpp"
#include "source2sdk/soundsystem/SndBeatTimeSignature_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x98
        // Construct allowed
        // 
        // static metadata: MPropertyArrayElementNameKey "m_name"
        // static metadata: MVDataAnonymousNode
        // static metadata: MVDataOutlinerNameExpr
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSndBeatPattern
        {
        public:
            // metadata: MPropertyFriendlyName "Pattern Name"
            CUtlString m_name; // 0x0            
            uint8_t _pad0008[0x4]; // 0x8
            // metadata: MPropertyFriendlyName "Pattern Launch Type"
            source2sdk::soundsystem::SndBeatLaunchSyncType_t m_launchSyncType; // 0xc            
            // metadata: MPropertyFriendlyName "Pattern Launch Priority"
            float m_flSyncPriority; // 0x10            
            // metadata: MPropertyFriendlyName "Time Signature"
            source2sdk::soundsystem::SndBeatTimeSignature_t m_timeSignature; // 0x14            
            uint8_t _pad0016[0x6]; // 0x16
            // metadata: MPropertyFriendlyName "Length (beats)"
            float m_flLength; // 0x1c            
            // metadata: MPropertyFriendlyName "Looping"
            bool m_bLooping; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            // metadata: MPropertyFriendlyName "Launch Track Event Type"
            // metadata: MPropertyGroupName "Launch Track"
            source2sdk::soundsystem::SndBeatEventType_t m_launchSyncEventType; // 0x24            
            // metadata: MPropertySuppressExpr "m_launchSyncEventType == eSndBeatPatternTypeKeys"
            // metadata: MPropertyGroupName "Launch Track"
            // metadata: MPropertyFriendlyName "Launch Track Beat/Bar/Phrase/Length Multiplier"
            float m_flSyncBeatMult; // 0x28            
            // metadata: MPropertyGroupName "Playback Track"
            // metadata: MPropertyFriendlyName "Play Track Event Type"
            source2sdk::soundsystem::SndBeatEventType_t m_playEventType; // 0x2c            
            // metadata: MPropertyGroupName "Playback Track"
            // metadata: MPropertyFriendlyName "Play Track Beat/Bar/Phrase/Length Multiplier"
            float m_flPlayBeatMult; // 0x30            
            // metadata: MPropertyFriendlyName "Key Type"
            source2sdk::soundsystem::SndBeatKeyType_t m_keyType; // 0x34            
            // metadata: MPropertySuppressExpr "m_keyType != eSndBeatPatternTypeKeys"
            // m_vecPatternKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeys_t> m_vecPatternKeys;
            char m_vecPatternKeys[0x18]; // 0x38            
            // metadata: MPropertySuppressExpr "m_keyType != eSndBeatPatternTypeKeyedFloats"
            // m_vecPatternFloats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedFloats_t> m_vecPatternFloats;
            char m_vecPatternFloats[0x18]; // 0x50            
            // metadata: MPropertySuppressExpr "m_keyType != eSndBeatPatternTypeKeyedSndEvts"
            // m_vecPatternSndEvts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedSndEvts_t> m_vecPatternSndEvts;
            char m_vecPatternSndEvts[0x18]; // 0x68            
            // metadata: MPropertySuppressExpr "m_keyType != eSndBeatPatternTypeKeyedMidi"
            // m_vecPatternMidi has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedMidiNotes_t> m_vecPatternMidi;
            char m_vecPatternMidi[0x18]; // 0x80            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_launchSyncType) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flSyncPriority) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_timeSignature) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flLength) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_bLooping) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_launchSyncEventType) == 0x24);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flSyncBeatMult) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_playEventType) == 0x2c);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flPlayBeatMult) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_keyType) == 0x34);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternKeys) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternFloats) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternSndEvts) == 0x68);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternMidi) == 0x80);
        
        static_assert(sizeof(source2sdk::soundsystem::CSndBeatPattern) == 0x98);
    };
};
