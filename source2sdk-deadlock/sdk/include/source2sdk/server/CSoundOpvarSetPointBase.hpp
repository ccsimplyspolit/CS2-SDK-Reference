#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x548
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "int m_iOpvarIndex"
        // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
        // static metadata: MNetworkVarNames "bool m_bFastRefresh"
        #pragma pack(push, 1)
        class CSoundOpvarSetPointBase : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            CEntityHandle m_hSource; // 0x4a4            
            uint8_t _pad04a8[0x18]; // 0x4a8
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4c0            
            uint8_t _pad04c8[0x50]; // 0x4c8
            // metadata: MNotSaved
            Vector m_vLastPosition; // 0x518            
            float m_flRefreshTime; // 0x524            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x528            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x530            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x538            
            // metadata: MNetworkEnable
            std::int32_t m_iOpvarIndex; // 0x540            
            // metadata: MNetworkEnable
            bool m_bUseAutoCompare; // 0x544            
            // metadata: MNetworkEnable
            bool m_bFastRefresh; // 0x545            
            uint8_t _pad0546[0x2];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetStackName; // 0x0
            // CUtlSymbolLarge InputSetOperatorName; // 0x0
            // CUtlSymbolLarge InputSetOpvarName; // 0x0
            // CUtlSymbolLarge InputSetOpvarIndex; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
            // void m_nGUID; // 0x4a8
            // void m_hOpvarData; // 0x4c8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointBase) == 0x548);
    };
};
