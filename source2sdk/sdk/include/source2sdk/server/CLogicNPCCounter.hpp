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
        // Size: 0x728
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicNPCCounter : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMinCountAll; // 0x4a8            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCountAll; // 0x4c0            
            // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactorAll;
            char m_OnFactorAll[0x20]; // 0x4d8            
            // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
            char m_OnMinPlayerDistAll[0x20]; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_1; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_1; // 0x530            
            // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_1;
            char m_OnFactor_1[0x20]; // 0x548            
            // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
            char m_OnMinPlayerDist_1[0x20]; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_2; // 0x588            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_2; // 0x5a0            
            // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_2;
            char m_OnFactor_2[0x20]; // 0x5b8            
            // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
            char m_OnMinPlayerDist_2[0x20]; // 0x5d8            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_3; // 0x5f8            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_3; // 0x610            
            // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_3;
            char m_OnFactor_3[0x20]; // 0x628            
            // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
            char m_OnMinPlayerDist_3[0x20]; // 0x648            
            CEntityHandle m_hSource; // 0x668            
            uint8_t _pad066c[0x4]; // 0x66c
            CUtlSymbolLarge m_iszSourceEntityName; // 0x670            
            float m_flDistanceMax; // 0x678            
            bool m_bDisabled; // 0x67c            
            uint8_t _pad067d[0x3]; // 0x67d
            std::int32_t m_nMinCountAll; // 0x680            
            std::int32_t m_nMaxCountAll; // 0x684            
            std::int32_t m_nMinFactorAll; // 0x688            
            std::int32_t m_nMaxFactorAll; // 0x68c            
            uint8_t _pad0690[0x8]; // 0x690
            CUtlSymbolLarge m_iszNPCClassname_1; // 0x698            
            std::int32_t m_nNPCState_1; // 0x6a0            
            bool m_bInvertState_1; // 0x6a4            
            uint8_t _pad06a5[0x3]; // 0x6a5
            std::int32_t m_nMinCount_1; // 0x6a8            
            std::int32_t m_nMaxCount_1; // 0x6ac            
            std::int32_t m_nMinFactor_1; // 0x6b0            
            std::int32_t m_nMaxFactor_1; // 0x6b4            
            uint8_t _pad06b8[0x4]; // 0x6b8
            float m_flDefaultDist_1; // 0x6bc            
            CUtlSymbolLarge m_iszNPCClassname_2; // 0x6c0            
            std::int32_t m_nNPCState_2; // 0x6c8            
            bool m_bInvertState_2; // 0x6cc            
            uint8_t _pad06cd[0x3]; // 0x6cd
            std::int32_t m_nMinCount_2; // 0x6d0            
            std::int32_t m_nMaxCount_2; // 0x6d4            
            std::int32_t m_nMinFactor_2; // 0x6d8            
            std::int32_t m_nMaxFactor_2; // 0x6dc            
            uint8_t _pad06e0[0x4]; // 0x6e0
            float m_flDefaultDist_2; // 0x6e4            
            CUtlSymbolLarge m_iszNPCClassname_3; // 0x6e8            
            std::int32_t m_nNPCState_3; // 0x6f0            
            bool m_bInvertState_3; // 0x6f4            
            uint8_t _pad06f5[0x3]; // 0x6f5
            std::int32_t m_nMinCount_3; // 0x6f8            
            std::int32_t m_nMaxCount_3; // 0x6fc            
            std::int32_t m_nMinFactor_3; // 0x700            
            std::int32_t m_nMaxFactor_3; // 0x704            
            uint8_t _pad0708[0x4]; // 0x708
            float m_flDefaultDist_3; // 0x70c            
            uint8_t _pad0710[0x18];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNPCCounter) == 0x728);
    };
};
