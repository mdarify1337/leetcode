/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Rotate Image.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:39:57 by mdarify           #+#    #+#             */
/*   Updated: 2023/07/15 16:57:45 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>
#include    <vector>

// Methode 1
class Solution 
{
public:
    void rotate(std::vector<std::vector<int>>& matrix) 
    {
        int l = matrix.size();
        std::vector<std::vector<int>> Rvector(l, std::vector(l, 0));
        int i = 0;
        int j = 0;
        int v = 0;
        int h = l - 1;
        for (; v < matrix.size(); v++, i++)
        {
            h = l - 1;
            j = 0;
            for (; h >= 0; h--, j++)
                 Rvector[i][j] = matrix[h][v];
        }
        i = 0;
        h = 0;
        j = 0;
        v = 0;
        for (; h < matrix.size(); h++, i++)
        {
            v = 0;
            j = 0;
            for (; v < l; v++, j++)
            {
                matrix[h][v]  = Rvector[i][j];
            }
        }
    }
};

// Methode 2

class Solution 
{
public:
   void rotate(std::vector<std::vector<int>>& matrix) 
    {
        int l = matrix.size();
        std::vector<std::vector<int>> Rvector(l, std::vector(l, 0));
        int i = 0;
        int j = 0;
        int v = 0;
        int h = l - 1;
        for (; v < matrix.size(); v++, i++)
        {
            h = l - 1;
            j = 0;
            for (; h >= 0; h--, j++)
                 Rvector[i][j] = matrix[h][v];
        }
        h = 0;
        while (matrix.size())
            matrix.pop_back();
        for (; h < Rvector.size(); h++)
            matrix.push_back(Rvector[h]);
    }
};