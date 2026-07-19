#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x558
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventEntity : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x498            
            bool m_bToLocalPlayer; // 0x499            
            bool m_bStopOnNew; // 0x49a            
            bool m_bSaveRestore; // 0x49b            
            bool m_bSavedIsPlaying; // 0x49c            
            uint8_t _pad049d[0x3]; // 0x49d
            float m_flSavedElapsedTime; // 0x4a0            
            uint8_t _pad04a4[0x4]; // 0x4a4
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4a8            
            CUtlSymbolLarge m_iszAttachmentName; // 0x4b0            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<SndOpEventGuid_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x30]; // 0x4b8            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x4e8            
            float m_flClientCullRadius; // 0x500            
            uint8_t _pad0504[0x2c]; // 0x504
            CUtlSymbolLarge m_iszSoundName; // 0x530            
            uint8_t _pad0538[0x14]; // 0x538
            CEntityHandle m_hSource; // 0x54c            
            std::int32_t m_nEntityIndexSelection; // 0x550            
            uint8_t _pad0554[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // CUtlSymbolLarge InputStartSoundOnAllClients; // 0x0
            // int32_t InputStartSoundOnSingleClient; // 0x0
            // bool InputPauseSound; // 0x0
            // bool InputUnPauseSound; // 0x0
            // void InputStopSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventEntity) == 0x558);
    };
};
