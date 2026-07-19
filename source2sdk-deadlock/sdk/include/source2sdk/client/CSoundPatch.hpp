#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCopyRecipientFilter.hpp"
#include "source2sdk/client/CSoundEnvelope.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class CSoundPatch
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::CSoundEnvelope m_pitch; // 0x8            
            source2sdk::client::CSoundEnvelope m_volume; // 0x18            
            uint8_t _pad0028[0x14]; // 0x28
            // metadata: MKV3TransferSaveOpsForField
            float m_shutdownTime; // 0x3c            
            // metadata: MKV3TransferSaveOpsForField
            float m_flLastTime; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            CUtlSymbolLarge m_iszSoundScriptName; // 0x48            
            // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnt;
            char m_hEnt[0x4]; // 0x50            
            // metadata: MNotSaved
            CEntityIndex m_soundEntityIndex; // 0x54            
            // metadata: MNotSaved
            VectorWS m_soundOrigin; // 0x58            
            std::int32_t m_isPlaying; // 0x64            
            source2sdk::client::CCopyRecipientFilter m_Filter; // 0x68            
            float m_flCloseCaptionDuration; // 0xa0            
            // metadata: MNotSaved
            bool m_bUpdatedSoundOrigin; // 0xa4            
            uint8_t _pad00a5[0x3]; // 0xa5
            // metadata: MNotSaved
            CUtlSymbolLarge m_iszClassName; // 0xa8            
            
            // Datamap fields:
            // void m_guid; // 0x28
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_pitch) == 0x8);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_volume) == 0x18);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_shutdownTime) == 0x3c);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flLastTime) == 0x40);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszSoundScriptName) == 0x48);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_hEnt) == 0x50);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundEntityIndex) == 0x54);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_soundOrigin) == 0x58);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_isPlaying) == 0x64);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_Filter) == 0x68);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_flCloseCaptionDuration) == 0xa0);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_bUpdatedSoundOrigin) == 0xa4);
        static_assert(offsetof(source2sdk::client::CSoundPatch, m_iszClassName) == 0xa8);
        
        static_assert(sizeof(source2sdk::client::CSoundPatch) == 0xb0);
    };
};
